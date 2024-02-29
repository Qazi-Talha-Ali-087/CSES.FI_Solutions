package main

import (
	"fmt"
	"io/ioutil"
	"net/http"
)

func main() {
	url := "http://127.0.0.1:8000"

	resp, err := http.Get(url)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	defer resp.Body.Close()

	body, err := ioutil.ReadAll(resp.Body)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	fmt.Println(string(body))
}