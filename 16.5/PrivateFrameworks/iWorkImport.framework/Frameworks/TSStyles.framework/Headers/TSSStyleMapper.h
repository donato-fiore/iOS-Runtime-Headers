// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSSSTYLEMAPPER_H
#define TSSSTYLEMAPPER_H

@class TSURetainedPointerKeyDictionary, NSMutableArray, NSSet, NSString;
@protocol TSKStyleMapper;

#import <Foundation/Foundation.h>

#import "TSSStylesheet.h"

@interface TSSStyleMapper : NSObject <TSKStyleMapper>

 {
    TSSStylesheet *_targetStylesheet;
    TSURetainedPointerKeyDictionary *_styleMap;
    NSMutableArray *_mappingContext;
}


@property (nonatomic) BOOL clientsMustRemap; // ivar: _clientsMustRemap
@property (readonly, nonatomic) NSSet *createdStyles; // ivar: _createdStyles
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceMatchStyle; // ivar: _forceMatchStyle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSSStylesheet *targetStylesheet;


-(BOOL)shouldMapParentOfStyle:(id)arg0 ;
-(id)_mappedStyleForStyle:(id)arg0 depth:(NSUInteger)arg1 ;
-(id)createRootStyleForStyle:(id)arg0 withPropertyMap:(id)arg1 ;
-(id)initWithTargetStylesheet:(id)arg0 ;
-(id)mappedStyleForStyle:(id)arg0 ;
-(id)stylesheetForNewRootStyleFromStyle:(id)arg0 ;
-(id)targetParentByContentTagMatchForStyle:(id)arg0 ;
-(id)targetParentByIdentifierExactMatchForStyle:(id)arg0 ;
-(id)targetParentByIdentifierPackageDescriptorFallbackMatchForStyle:(id)arg0 ;
-(id)targetParentByNameMatchForStyle:(id)arg0 ;
-(id)targetParentByPropertyMapMatchForUnidentifiedStyle:(id)arg0 ;
-(id)targetParentForStyle:(id)arg0 ;
-(void)dealloc;
-(void)popMappingContext:(id)arg0 ;
-(void)pushMappingContext:(id)arg0 ;


@end


#endif