/**
 * @author Ronald Tavarez
 * @brief Hacker Rank - Small Triangle Large Triangle Solution.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

/* MY CODE START */
double triangle_compute_area(triangle * t) {
    double s = (t->a + t->b + t->c) / 2.0f;
    return sqrt(s * (s - t->a) * (s - t->b) * (s - t->c));
}

int triangle_compare_area(const void * a, const void * b) {
    double left_area = triangle_compute_area((triangle *) a);
    double right_area = triangle_compute_area((triangle *) b);
    
    if (left_area < right_area)
        return -1;
    
    if (left_area > right_area)
        return 1;
    
    return 0;
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    qsort(tr, n, sizeof(triangle), triangle_compare_area);
}
/* MY CODE END */

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}