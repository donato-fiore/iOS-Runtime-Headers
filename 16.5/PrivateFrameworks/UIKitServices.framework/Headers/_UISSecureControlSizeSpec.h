// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISSECURECONTROLSIZESPEC_H
#define _UISSECURECONTROLSIZESPEC_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UISSecureControlCategory.h"
#import "UISSlotStyle.h"

@interface _UISSecureControlSizeSpec : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_localization;
    ? _fields;
}


@property (readonly, nonatomic) BOOL arrangeVertically;
@property (readonly, nonatomic) _UISSecureControlCategory *category; // ivar: _category
@property (readonly, nonatomic) UISSlotStyle *style;


+(BOOL)supportsSecureCoding;
+(id)specWithStyle:(id)arg0 tag:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToStyle:(id)arg0 tag:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCategory:(id)arg0 arrangeVertically:(BOOL)arg1 accessibilityContrast:(NSUInteger)arg2 displayScale:(unsigned char)arg3 layoutDirection:(NSUInteger)arg4 legibilityWeight:(NSUInteger)arg5 localization:(id)arg6 preferredContentSizeCategory:(NSUInteger)arg7 userInterfaceIdiom:(NSUInteger)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif