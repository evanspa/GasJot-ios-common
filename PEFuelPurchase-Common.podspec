Pod::Spec.new do |s|
  s.name         = "PEFuelPurchase-Common"
  s.version      = "1.0.0"
  s.license      = "MIT"
  s.summary      = "An iOS static library containing constant definitions useful to the PEFuelPurchase-App application."
  s.author       = { "Paul Evans" => "evansp2@gmail.com" }
  s.homepage     = "https://github.com/evanspa/#{s.name}"
  s.source       = { :git => "https://github.com/evanspa/#{s.name}.git", :tag => "#{s.name}-v#{s.version}" }
  s.platform     = :ios, '8.1'
  s.source_files = '**/*.{h,m}'
  s.public_header_files = '**/*.h'
  s.exclude_files = "**/*Tests/*.*"
  s.requires_arc = true
  s.dependency 'PEHateoas-client', '~> 1.0.1'
end
