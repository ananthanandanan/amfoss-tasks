int main()
{
   int i, c, a, b, t,d;
    cin >> t;
    while (t--)
    {    
        d = 0;
        cin >> a;
        for (i = 2;i <= a;i++)
        {
            if (a % i == 0)
            {

                b = 1;

                for (c = 2; c <= sqrt(i); c++)
                {
                    if (i % c == 0)
                    {
                        b = 0;
                        break;
                    }

                }


                if (b == 1)
                {
                    if (d < i)
                        d = i;

                }
            }
        }
        cout << d <<endl;

    }



    return 0;
}