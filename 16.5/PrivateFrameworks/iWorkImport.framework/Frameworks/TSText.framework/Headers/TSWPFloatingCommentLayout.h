// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPFLOATINGCOMMENTLAYOUT_H
#define TSWPFLOATINGCOMMENTLAYOUT_H

@class NSString;
@protocol TSWPStyleProviding, TSWPStyleProvider;


#import "TSWPShapeLayout.h"

@interface TSWPFloatingCommentLayout : TSWPShapeLayout <TSWPStyleProviding, TSWPStyleProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBoldItalicUnderlineShortcuts;


-(BOOL)allowsConnections;
-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(BOOL)shouldBeDisplayedInShowMode;
-(BOOL)shouldDisplayGuides;
-(BOOL)supportsRotation;
-(BOOL)wantsToProvideStylesForTextLayout:(id)arg0 ;
-(Class)repClassOverride;
-(id)characterStyleAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)commentInfo;
-(id)dropCapStyleAtParIndex:(NSUInteger)arg0 ;
-(id)fill;
-(id)listStyleAtParIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)paragraphStyleAtParIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)styleProvider;
-(id)styleProviderForTextLayout:(id)arg0 ;
-(id)textPropertiesForEquation:(id)arg0 basedOnProperties:(id)arg1 ;
-(int)wrapType;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct CGSize )minimumSize;


@end


#endif