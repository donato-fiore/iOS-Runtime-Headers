// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILIBRARYPRODUCTLOCKUPLAYOUT_H
#define VUILIBRARYPRODUCTLOCKUPLAYOUT_H

@class NSString;
@protocol VUILibraryProductLockupViewLayout;

#import <Foundation/Foundation.h>

#import "VUITextLayout.h"
#import "VUIMediaEntityType.h"

@interface VUILibraryProductLockupLayout : NSObject <VUILibraryProductLockupViewLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUITextLayout *descriptionTextLayout; // ivar: _descriptionTextLayout
@property (readonly, nonatomic) VUIMediaEntityType *entityType; // ivar: _entityType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUITextLayout *playLabelTextLayout; // ivar: _playLabelTextLayout
@property (retain, nonatomic) VUITextLayout *subtitleTextLayout; // ivar: _subtitleTextLayout
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(CGFloat)buttonModuleTopMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)contentDescriptionBottomMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)contentDescriptionTopMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)coverArtBottomPadding;
-(CGFloat)coverArtImageRightMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)metadataTopMargin;
-(CGFloat)subtitleTopMarginForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)titleTopMargin;
-(NSInteger)downloadButtonPosition;
-(NSInteger)layoutTypeForWindowWidth:(CGFloat)arg0 ;
-(id)contentDescriptionFontForSizeClass:(NSInteger)arg0 ;
-(id)descriptionTextLayoutForTraitCollection:(id)arg0 isExpanded:(BOOL)arg1 ;
-(id)initWithLayoutType:(NSInteger)arg0 entityType:(id)arg1 ;
-(id)subtitleTextLayoutForWindowWidth:(CGFloat)arg0 ;
-(int)contentDescriptionNumberOfLinesForTraitCollection:(id)arg0 ;
-(struct CGSize )coverArtImageSize;
-(void)configLayout;


@end


#endif