function f=fibor(n)
f=zeros(1,n);
if n<=2 && isscalar(n)
    f(1)=1;
elseif n<5
    f(n)=fibor(n-1)+fibor(n-2);
else
    f(n)=fibor(n-2)+2*fibor(n-3)+fibor(n-4);
end