// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPMERGESMARTFIELD_H
#define TSWPMERGESMARTFIELD_H

@class NSString;


#import "TSWPPlaceholderSmartField.h"
#import "TSWPMergeFieldType.h"

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField

@property (nonatomic) NSInteger category; // ivar: _category
@property (copy, nonatomic) TSWPMergeFieldType *fieldType; // ivar: _fieldType
@property (copy, nonatomic) NSString *guid; // ivar: _guid
@property (nonatomic) BOOL hasCustomText; // ivar: _hasCustomText
@property (nonatomic) BOOL requiresFollowingWhitespace; // ivar: _requiresFollowingWhitespace
@property (copy, nonatomic) NSString *whitespace; // ivar: _whitespace


-(BOOL)allowsPasteAsSmartField;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 category:(NSInteger)arg1 ;
-(id)scriptTag;
-(unsigned short)smartFieldKind;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;


@end


#endif