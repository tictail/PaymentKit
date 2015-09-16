Pod::Spec.new do |s|
  s.name                  = "TICPaymentKit"
  s.version               = "1.2"
  s.summary               = "Utility library for creating credit card payment forms based on Stripe/PaymentKit."
  s.license               = { :type => 'MIT', :file => 'LICENSE' }
  s.homepage              = "https://tictail.com"
  s.author                = { "Alex MacCaw" => "alex@stripe.com", "Tyler Faux" => "tyler@tictail.com" }
  s.source                = { :git => "https://github.com/tictail/TICPaymentKit.git", :tag => s.version.to_s}
  s.source_files          = 'TICPaymentKit/*.{h,m}'
  s.public_header_files   = 'TICPaymentKit/*.h'
  s.resources             = 'TICPaymentKit/Resources/Cards/*.png', 'TICPaymentKit/Resources/*.png'
  s.platform              = :ios
  s.requires_arc          = true
  s.ios.deployment_target = '8.0'
end
