// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISUPPLEMENTALPHRASEITEM_H
#define TISUPPLEMENTALPHRASEITEM_H

@class NSString;


#import "TISupplementalItem.h"

@interface TISupplementalPhraseItem : TISupplementalItem

@property (copy, nonatomic) NSString *phoneticTitle; // ivar: _phoneticTitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 phoneticTitle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif