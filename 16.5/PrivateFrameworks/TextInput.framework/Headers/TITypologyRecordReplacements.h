// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPOLOGYRECORDREPLACEMENTS_H
#define TITYPOLOGYRECORDREPLACEMENTS_H

@class NSArray, NSString;


#import "TITypologyRecord.h"
#import "TIKeyboardLayout.h"

@interface TITypologyRecordReplacements : TITypologyRecord

@property (retain, nonatomic) NSArray *candidates; // ivar: _candidates
@property (retain, nonatomic) TIKeyboardLayout *keyLayout; // ivar: _keyLayout
@property (copy, nonatomic) NSString *string; // ivar: _string


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif