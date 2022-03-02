function ntmy {
  echo "Nice to meet you $1"
}


function addseq {
  sum=0
  for element in $@
  do
    let sum=sum+$element
  done
  
  echo $sum
}

function addseq2 {
  local sum=0
  for element in $@
  do
    let sum=sum+$element
  done
  echo $sum
}
