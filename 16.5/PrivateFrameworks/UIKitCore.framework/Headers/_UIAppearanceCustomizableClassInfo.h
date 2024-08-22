// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIAPPEARANCECUSTOMIZABLECLASSINFO_H
#define _UIAPPEARANCECUSTOMIZABLECLASSINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIAppearanceCustomizableClassInfo : NSObject {
    BOOL _isGuideClassRoot;
    BOOL _isCustomizableViewClassRoot;
}


@property (readonly, nonatomic) NSString *_classReferenceKey; // ivar: _classReferenceKey
@property (readonly, nonatomic) Class _customizableViewClass; // ivar: _customizableViewClass
@property (readonly, nonatomic) Class _guideClass; // ivar: _guideClass
@property (readonly, nonatomic) NSUInteger _hash; // ivar: _hash


+(id)_cachedClassInfoForViewClass:(Class)arg0 withGuideClass:(Class)arg1 ;
+(id)_customizableClassInfoForViewClass:(Class)arg0 withGuideClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_superClassInfo;
-(id)description;
-(void)dealloc;


@end


#endif