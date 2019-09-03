Pod::Spec.new do |s|
  s.name             = 'SCDebugBridge'
  s.version          = '0.1.0'
  s.summary          = 'Debug server host and port for React Native iOS'
  s.homepage         = 'https://github.com/chunkhang/SCDebugBridge'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'chunkhang' => 'chunkhang@gmail.com' }
  s.source           = { :git => 'https://github.com/chunkhang/SCDebugBridge.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'

  s.dependency 'React'

  s.source_files = 'SCDebugBridge/*.{h,m}'
end
