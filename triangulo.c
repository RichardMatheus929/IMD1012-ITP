int isValid (int a, int b, int c) {

        if (a < b + c && b < a + c && c < a + b) {

            return 1;

        }

        return 0;

    }

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int first = isValid(a, b, c) ? 1 : 0; 
    int second = isValid(a, b, d) ? 1 : 0;
    int tree = isValid(a, d, c) ? 1 : 0;
    int four = isValid(d, b, c) ? 1 : 0; 

    if (first || second || tree || four) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}