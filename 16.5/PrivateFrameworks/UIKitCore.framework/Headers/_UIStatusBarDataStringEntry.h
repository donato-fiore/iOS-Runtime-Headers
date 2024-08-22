// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARDATASTRINGENTRY_H
#define _UISTATUSBARDATASTRINGENTRY_H

@class UIStatusBarDataEntry, NSString;



@interface _UIStatusBarDataStringEntry : UIStatusBarDataEntry

@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
+(id)entryWithStringValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromData:(struct ? *)arg0 type:(int)arg1 string:(char *)arg2 maxLength:(int)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif