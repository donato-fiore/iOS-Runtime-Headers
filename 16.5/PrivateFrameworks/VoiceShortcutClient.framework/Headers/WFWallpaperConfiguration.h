// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWALLPAPERCONFIGURATION_H
#define WFWALLPAPERCONFIGURATION_H

@class NSString, NSURL, NSSecurityScopedURLWrapper, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFWallpaperConfiguration : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (readonly, nonatomic) NSURL *assetURL;
@property (readonly, nonatomic) NSSecurityScopedURLWrapper *assetURLWrapper; // ivar: _assetURLWrapper
@property (readonly, nonatomic) NSNumber *legibilityBlur; // ivar: _legibilityBlur
@property (readonly, nonatomic) NSInteger location; // ivar: _location
@property (readonly, nonatomic) NSNumber *smartCrop; // ivar: _smartCrop
@property (readonly, nonatomic) NSNumber *usePreview; // ivar: _usePreview


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAssetURL:(id)arg0 localIdentifier:(id)arg1 location:(NSInteger)arg2 legibilityBlur:(id)arg3 smartCrop:(id)arg4 usePreview:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalIdentifier:(id)arg0 location:(NSInteger)arg1 legibilityBlur:(id)arg2 smartCrop:(id)arg3 usePreview:(id)arg4 ;
-(id)initWithURL:(id)arg0 location:(NSInteger)arg1 legibilityBlur:(id)arg2 smartCrop:(id)arg3 usePreview:(id)arg4 ;
-(id)initWithUserInfo:(id)arg0 ;
-(id)userInfoRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif