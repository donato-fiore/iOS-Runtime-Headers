// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUIHOMESCREENSILHOUETTEVIEWBUILDER_H
#define SBSUIHOMESCREENSILHOUETTEVIEWBUILDER_H

@class SBSHomeScreenSilhouetteLayout;

#import <Foundation/Foundation.h>


@interface SBSUIHomeScreenSilhouetteViewBuilder : NSObject

@property (copy, nonatomic) id *dockViewBuilder; // ivar: _dockViewBuilder
@property (copy, nonatomic) id *iconViewBuilder; // ivar: _iconViewBuilder
@property (nonatomic) BOOL includesDock; // ivar: _includesDock
@property (copy, nonatomic) id *rootViewBuilder; // ivar: _rootViewBuilder
@property (readonly, copy, nonatomic) SBSHomeScreenSilhouetteLayout *silhouetteLayout; // ivar: _silhouetteLayout
@property (readonly, nonatomic) CGSize viewSize; // ivar: _viewSize


-(id)buildView;
-(id)initWithSilhouetteLayout:(id)arg0 viewSize:(struct CGSize )arg1 ;
-(id)makeDockView;
-(id)makeIconView;
-(id)makeRootView;
-(struct CGRect )frameForNormalizedFrame:(struct CGRect )arg0 ;


@end


#endif