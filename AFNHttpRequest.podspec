
Pod::Spec.new do |spec|

  spec.name         = "AFNHttpRequest"
  spec.version      = "1.0.0"
  spec.summary      = "A short description of AFNHttpRequest."

  spec.description  = <<-DESC
                   DESC

  spec.homepage     = "https://github.com/Mengxiaoxiong/AFNHttp"

  spec.license      = "MIT (example)"

  spec.author             = { "Mxx" => "1072221879@qq.com" }

  spec.source       = { :git => "https://github.com/Mengxiaoxiong/AFNHttp.git", :tag => "#{spec.version}" }




  spec.source_files  = "AFNHttpRequest", "AFNHttpRequest/**/*.{h,m}"
  spec.exclude_files = "AFNHttpRequest/Exclude"




end
