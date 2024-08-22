// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSCENE_H
#define TSCH3DSCENE_H

@class NSMutableDictionary, TSUNoCopyDictionary, NSMutableArray, NSArray;
@protocol TSCH3DScenePropertyAccessorFactory, TSCH3DSceneDelegate;

#import <Foundation/Foundation.h>

#import "TSCH3DScenePropertyAccessor.h"
#import "TSCH3DSceneObject.h"
#import "TSCH3DCamera.h"
#import "TSCH3DScene.h"

@interface TSCH3DScene : NSObject {
    NSObject<TSCH3DScenePropertyAccessorFactory> *_accessorFactory;
    TSCH3DScenePropertyAccessor *_accessor;
    NSMutableDictionary *_enumeratorMap;
    NSMutableDictionary *_propertiesMap;
    TSUNoCopyDictionary *_delegateMap;
    TSCH3DSceneObject *_main;
    NSMutableArray *_objects;
    TSCH3DCamera *_camera;
}


@property (retain, nonatomic) TSCH3DScenePropertyAccessor *accessor;
@property (retain, nonatomic) NSObject<TSCH3DScenePropertyAccessorFactory> *accessorFactory;
@property (retain, nonatomic) TSCH3DCamera *camera;
@property (readonly, nonatomic) NSArray *debugObjects;
@property (readonly, nonatomic) NSObject<TSCH3DSceneDelegate> *delegate;
@property (retain, nonatomic) TSCH3DSceneObject *main;
@property (retain, nonatomic) TSCH3DScene *original; // ivar: _original


+(id)scene;
-(NSUInteger)count;
-(id)clone;
-(id)delegateForObject:(id)arg0 ;
-(id)delegateForSceneObject:(id)arg0 ;
-(id)description;
-(id)enumeratorForType:(id)arg0 ;
-(id)enumeratorMap;
-(id)extractObjects:(BOOL)arg0 ofClasses:(id)arg1 ;
-(id)extractObjectsNotOfClass:(Class)arg0 ;
-(id)extractObjectsNotOfClasses:(id)arg0 ;
-(id)extractObjectsOfClass:(Class)arg0 ;
-(id)extractObjectsOfClasses:(id)arg0 ;
-(id)init;
-(id)mutablePropertiesForType:(id)arg0 ;
-(id)objects;
-(id)partForType:(id)arg0 ;
-(id)propertiesForType:(id)arg0 ;
-(id)propertiesMap;
-(id)reallocateObjects;
-(id)removeObjects:(BOOL)arg0 ofClasses:(id)arg1 addTo:(id)arg2 ;
-(id)removeObjects:(BOOL)arg0 ofClasses:(id)arg1 into:(id)arg2 ;
-(id)renderCache;
-(id)returnRemoved:(BOOL)arg0 removeObjectsPassingTest:(id)arg1 ;
-(struct tmat4x4<float> )transform;
-(void)addObject:(id)arg0 ;
-(void)copyPropertiesFromScene:(id)arg0 ;
-(void)enumerateAllObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)makeDelegatesFromDelegator:(id)arg0 ;
-(void)overrideObjects;
-(void)removeObjectsNotOfClass:(Class)arg0 ;
-(void)removeObjectsOfClass:(Class)arg0 ;
-(void)resetEnumerator;
-(void)resetObjects;
-(void)resetProperties;
-(void)setEnumerator:(id)arg0 forType:(id)arg1 ;
-(void)setEnumerator:(id)arg0 properties:(id)arg1 forType:(id)arg2 ;
-(void)setPart:(id)arg0 forType:(id)arg1 ;
-(void)setProperties:(id)arg0 forType:(id)arg1 ;


@end


#endif