function matrix=sparse2matrix(cellvec)
matrix=cellvec{1};
magnetude=cellvec{2};
%for i=3:length(cellvec)

matrix=ones(matrix(1),matrix(2))*magnetude;