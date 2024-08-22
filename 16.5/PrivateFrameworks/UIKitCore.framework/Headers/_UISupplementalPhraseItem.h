// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISUPPLEMENTALPHRASEITEM_H
#define _UISUPPLEMENTALPHRASEITEM_H

@class UISupplementalItem, NSString;



@interface _UISupplementalPhraseItem : UISupplementalItem

@property (readonly, nonatomic) NSString *title;


-(NSUInteger)_identifier;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTISupplementalPhraseItem:(id)arg0 ;
-(id)initWithTISupplementalPhraseItem:(id)arg0 icon:(id)arg1 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 icon:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif