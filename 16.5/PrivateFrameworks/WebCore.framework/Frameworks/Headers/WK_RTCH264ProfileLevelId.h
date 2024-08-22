// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCH264PROFILELEVELID_H
#define WK_RTCH264PROFILELEVELID_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WK_RTCH264ProfileLevelId : NSObject

@property (retain, nonatomic) NSString *hexString; // ivar: _hexString
@property (nonatomic) NSUInteger level; // ivar: _level
@property (nonatomic) NSUInteger profile; // ivar: _profile


-(id)initWithHexString:(id)arg0 ;
-(id)initWithProfile:(NSUInteger)arg0 level:(NSUInteger)arg1 ;


@end


#endif