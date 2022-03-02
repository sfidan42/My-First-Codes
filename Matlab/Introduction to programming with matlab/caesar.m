function coded=caesar(V,k)
for i=1:length(V)
    if V(i)+k<32
        V(i)=V(i)+k+94+1;
    elseif V(i)+k<=126
        V(i)=V(i)+k;
    else
        V(i)=V(i)+k-94-1;
    end
end
coded=V;