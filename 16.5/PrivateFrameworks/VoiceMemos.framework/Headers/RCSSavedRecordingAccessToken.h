// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCSSAVEDRECORDINGACCESSTOKEN_H
#define RCSSAVEDRECORDINGACCESSTOKEN_H

@class NSString, NSURL, NSUUID, NSDictionary;
@protocol NSSecureCoding, NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RCSSavedRecordingAccessToken : NSObject <NSSecureCoding, NSCoding, NSCopying>



@property (readonly, nonatomic) NSInteger accessIntent; // ivar: _accessIntent
@property (readonly, copy, nonatomic) NSString *accessName; // ivar: _accessName
@property (readonly, nonatomic) NSURL *compositionAVURL; // ivar: _compositionAVURL
@property (readonly, nonatomic, getter=isExclusive) BOOL exclusive; // ivar: _exclusive
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)tokenWithName:(id)arg0 accessIntent:(NSInteger)arg1 compositionAVURL:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 accessIntent:(NSInteger)arg1 compositionAVURL:(id)arg2 identifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif