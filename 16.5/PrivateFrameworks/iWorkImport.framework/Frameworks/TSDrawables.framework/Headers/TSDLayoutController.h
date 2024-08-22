// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDLAYOUTCONTROLLER_H
#define TSDLAYOUTCONTROLLER_H

@class NSMapTable, NSMutableSet;

#import <Foundation/Foundation.h>

#import "TSDLayout.h"
#import "TSDCanvas.h"
#import "TSDRootLayout.h"

@interface TSDLayoutController : NSObject {
    NSMapTable *_layoutsByInfo;
    NSMutableSet *_invalidLayouts;
    NSMutableSet *_layoutsNeedingRecreating;
    NSMutableSet *_invalidChildrenLayouts;
    TSDLayout *_validatingLayout;
}


@property (readonly, weak, nonatomic) TSDCanvas *canvas; // ivar: _canvas
@property (readonly, nonatomic) CGRect rectOfTopLevelLayouts;
@property (readonly, nonatomic) TSDRootLayout *rootLayout; // ivar: _rootLayout


+(id)allInteractiveLayoutControllers;
+(void)temporaryLayoutControllerForInfos:(id)arg0 useInBlock:(id)arg1 ;
-(id)initWithCanvas:(id)arg0 ;
-(id)layoutForInfo:(id)arg0 ;
-(id)layoutForInfo:(id)arg0 childOfLayout:(id)arg1 ;
-(id)layoutsForInfo:(id)arg0 ;
-(id)layoutsForInfos:(id)arg0 ;
-(id)layoutsInRect:(struct CGRect )arg0 ;
-(id)layoutsInRect:(struct CGRect )arg0 deep:(BOOL)arg1 ;
-(id)sortLayoutsForDependencies:(id)arg0 ;
-(id)validatedLayoutForInfo:(id)arg0 ;
-(id)validatedLayoutForInfo:(id)arg0 childOfLayout:(id)arg1 ;
-(id)validatedLayoutsForInfo:(id)arg0 ;
-(void)dealloc;
-(void)i_enumerateLayoutsUsingBlock:(id)arg0 ;
-(void)i_registerLayout:(id)arg0 ;
-(void)i_removeAllLayouts;
-(void)i_unregisterLayout:(id)arg0 ;
-(void)invalidateAllLayoutFrames;
-(void)invalidateChildrenOfLayout:(id)arg0 ;
-(void)invalidateLayout:(id)arg0 ;
-(void)invalidateLayoutForRecreation:(id)arg0 ;
-(void)notifyThatLayoutsChangedOutsideOfLayout;
-(void)p_recreateLayoutsIfNeededToValidateLayouts:(id)arg0 ;
-(void)p_validateLayouts:(id)arg0 shouldMarkValidLayoutsThatDoNotWantValidation:(BOOL)arg1 ;
-(void)setInfos:(id)arg0 ;
-(void)validateLayoutWithDependencies:(id)arg0 ;
-(void)validateLayouts;
-(void)validateLayoutsWithDependencies:(id)arg0 ;


@end


#endif