Pod::Spec.new do |s|
  s.name  = 'scriber'
  s.version = '0.1.0'
  s.platform = :ios
  s.summary = 'Metrics for subscription and IAP apps.'
  s.author = { 'scriber' => 'help@scriber.io' }
  s.homepage = 'https://scriber.io'
  s.license = { :file => 'LICENSE', :type => 'Commercial' }
  s.source = {
    :git => 'https://github.com/scriber/scriber-ios-pod.git',
    :tag => s.version.to_s
  }
  s.ios.vendored_frameworks = 'Scriber.framework'
end