// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPRUBYFIELD_H
#define TSWPRUBYFIELD_H

@class NSString;


#import "TSWPSmartField.h"

@interface TSWPRubyField : TSWPSmartField

@property (readonly, nonatomic) NSString *baseText;
@property (readonly, nonatomic) int baseTextScript;
@property (copy, nonatomic) NSString *rubyText; // ivar: _rubyText


-(BOOL)allowsEditing;
-(BOOL)canCopy:(struct _NSRange )arg0 ;
-(BOOL)supportsDeepCopyForUndo;
-(NSUInteger)attributeArrayKind;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 rubyText:(id)arg1 ;
-(id)text;
-(int)styleAttributeArrayKind;
-(unsigned short)smartFieldKind;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif