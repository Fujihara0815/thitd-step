ss = [65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70]
se = [44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]

def std(arr_x)
  avg = arr_x.sum/arr_x.length
  arrl=arr_x.map{|x|(x-avg)**2}
  return Math.sqrt(arrl.sum/arr_x.length.round(2))
end

def dev(arr_x)
  avg=arr_x.sum/arr_x.length
  arrl=arr_x.map{|x|(x-avg)**2}
  std=Math.sqrt(arrl.sum/arr_x.length)
  return arr_x.map{|x|((x-avg)*10/std+5).round(2)}
end

p "rika heikin"
p ss.sum.to_f/ss.length.to_f
p "eigo heikin"
p se.sum.to_f/se.length.to_f
p "rika hyouzyunhensa"
p std(ss)
p "eigo hyouzyunhensa"
p std(se)
p "rika goukei"
p ss.sum.to_f
p "eigo goukei"
p se.sum.to_f
p "rika hensati"
p dev(ss)
p "eigo hensati"
p dev(se)
p "rika rankingu"
p ss.sort.reverse
p "eigo rankingu"
p se.sort.reverse


