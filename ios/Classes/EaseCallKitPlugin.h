#import <Flutter/Flutter.h>
#import <EaseCallKit5ImageCode/EaseCallUIKit.h>

@interface EaseCallKitPlugin : NSObject<FlutterPlugin>
@end


@interface EaseCallError (Flutter)
- (NSDictionary *)toJson ;
@end

@interface EaseCallConfig (Flutter)
+ (EaseCallConfig *)fromJson:(NSDictionary *)dict;
- (NSDictionary *)toJson ;
@end

@interface EaseCallUser (Flutter)
+ (EaseCallUser *)fromJson:(NSDictionary *)dict;
- (NSDictionary *)toJson ;
@end

