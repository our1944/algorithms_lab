(defn is-unique?
[str]
(let [coll (into #{} str)]
  (= (count coll)(count str))))