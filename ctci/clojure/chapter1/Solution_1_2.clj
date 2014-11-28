(defn reverse-str
  "reserve a null-terminated string"
  [words]
  (apply str (reverse words)))

(reverse-str "Mini Baguettes")
(reverse-str "Panzanella")
