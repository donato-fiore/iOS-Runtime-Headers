// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPOLOGYRECORDKEYBOARDLAYOUT_H
#define TITYPOLOGYRECORDKEYBOARDLAYOUT_H

@class NSString;


#import "TITypologyRecord.h"
#import "TIKeyboardLayout.h"

@interface TITypologyRecordKeyboardLayout : TITypologyRecord

@property (retain, nonatomic) TIKeyboardLayout *keyboardLayout; // ivar: _keyboardLayout
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif