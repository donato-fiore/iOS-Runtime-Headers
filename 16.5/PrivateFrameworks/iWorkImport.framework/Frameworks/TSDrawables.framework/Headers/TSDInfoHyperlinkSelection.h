// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDINFOHYPERLINKSELECTION_H
#define TSDINFOHYPERLINKSELECTION_H

@class TSKSelection, NSSet;



@interface TSDInfoHyperlinkSelection : TSKSelection

@property (readonly, copy, nonatomic) NSSet *drawableInfos; // ivar: _drawableInfos
@property (readonly, nonatomic) NSUInteger infoCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL openInEditMode; // ivar: _openInEditMode
@property (readonly, nonatomic) NSUInteger unlockedInfoCount;
@property (readonly, nonatomic) NSSet *unlockedInfos;


+(Class)archivedSelectionClass;
+(id)selectionWithDrawableInfos:(id)arg0 openInEditMode:(BOOL)arg1 ;
-(id)initWithDrawableInfos:(id)arg0 openInEditMode:(BOOL)arg1 ;


@end


#endif