// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDIALOGBUTTON_H
#define WFDIALOGBUTTON_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFDialogButton : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)cancelButton;
+(id)defaultButtonWithTitle:(id)arg0 ;
+(id)doneButton;
+(id)okButton;
+(id)selectButton;
+(id)startButton;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 style:(NSInteger)arg2 ;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif