
/*
Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"
Example 2:

Input: num1 = "123", num2 = "456"
Output: "56088"
*/

class Solution {
public:
	string multiply( string num1, string num2 )
	{
		if ( num1 == "0" || num2 == "0" )
			return("0");
		if ( num1.empty() || num2.empty() )
			return("0");
		int sz = 0;
		if ( (num1[0] - '0') * (num2[0] - '0') > 10 )
			sz = num1.size() + num2.size() + 1;
		else
			sz = num1.size() + num2.size();
		reverse( num1.begin(), num1.end() );
		reverse( num2.begin(), num2.end() );

		vector<string>	v;
		string		res1 {};
		for ( int j = 0; j < num2.size(); j++ )
		{
			string	res {};
			int	temp = 0;
			for ( int i = 0; i < num1.size(); i++ )
			{
				if ( ( (num1[i] - '0') * (num2[j] - '0') + temp) >= 10 )
				{
					int s = ( (num1[i] - '0') * (num2[j] - '0') + temp) % 10;
					res	+= s + '0';
					temp	= ( (num1[i] - '0') * (num2[j] - '0') + temp) / 10;
				}else  {
					char x = (num1[i] - '0') * (num2[j] - '0') + temp + '0';
					temp	= 0;
					res	+= x;
				}
			}
			string	tmp( j, '0' );
			int	s = res.size() + j;
			if ( temp != 0 )
			{
				char l = temp + '0';
				res = res + l;
				s++;
			}
			string	tmp1( sz - s, '0' );
			string	m = tmp + res + tmp1;
			v.emplace_back( m );
		}
		int temp = 0;
		for ( int i = 0; i < v[0].size(); i++ )
		{
			int s = 0;
			for ( int j = 0; j < v.size(); j++ )
			{
				s += v[j][i] - '0';
			}
			res1	+= (s % 10 + temp) % 10 + '0';
			temp	= (s + temp) / 10;
		}
		if ( temp != 0 )
		{
			char l = temp + '0';
			res1 = res1 + l;
		}

		reverse( res1.begin(), res1.end() );
		if ( res1[0] == '0' )
			res1.erase( 0, 1 );
		return(res1);
	}
};
