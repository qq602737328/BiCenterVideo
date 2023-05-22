//
//  BiCenterVideo.h
//  BiCenterVideoSDK
//
//  Created by 罗盼盼 on 2023/5/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BiCenterVideo : NSObject

+(void)initWithAppKey:(NSString *)appKey APNSCerName:(NSString * _Nullable)APNSCerName;

+(void)loginWithToken:(NSString *)token;

+(void)logout;


+(void)joinMeetingRoom;

//+(void)callVideo;

+(instancetype)sharedManager;

@end

NS_ASSUME_NONNULL_END
