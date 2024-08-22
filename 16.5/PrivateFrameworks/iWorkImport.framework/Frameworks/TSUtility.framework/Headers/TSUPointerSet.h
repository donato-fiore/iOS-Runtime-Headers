// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUPOINTERSET_H
#define TSUPOINTERSET_H

@class NSSet;



@interface TSUPointerSet : NSSet {
    *__CFSet mSet;
}




+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(NSUInteger)count;
-(id)allObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCFSet:(struct __CFSet *)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)setByAddingObject:(id)arg0 ;
-(id)setByAddingObjectsFromArray:(id)arg0 ;
-(id)setByAddingObjectsFromSet:(id)arg0 ;
-(void)dealloc;
-(void)getObjects:(*id)arg0 ;


@end


#endif