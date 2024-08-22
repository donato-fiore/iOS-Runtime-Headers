// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTEXTSTYLEPRESET_H
#define TSWPTEXTSTYLEPRESET_H

@class TSPObject, NSString;
@protocol TSSPreset, TSKModel;


#import "TSWPListStyle.h"
#import "TSWPParagraphStyle.h"

@interface TSWPTextStylePreset : TSPObject <TSSPreset, TSKModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSWPListStyle *listStyle; // ivar: _listStyle
@property (retain, nonatomic) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (copy, nonatomic) NSString *presetIdentifier; // ivar: _presetIdentifier
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 presetIdentifier:(id)arg1 paragraphStyle:(id)arg2 listStyle:(id)arg3 ;
-(id)referencedStyles;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif