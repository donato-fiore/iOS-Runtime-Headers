// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTEPHEMERALCELLMAP_H
#define TSTEPHEMERALCELLMAP_H

@class NSString;
@protocol TSTCellMap;

#import <Foundation/Foundation.h>


@interface TSTEphemeralCellMap : NSObject <TSTCellMap>

 {
    *? mCellIDs;
    *id mCells;
    NSUInteger mCapacity;
    NSUInteger mCount;
    BOOL mMayModifyValuesReferencedByFormulas;
    BOOL mIgnoreHiddenCellsWhenApplying;
}


@property (nonatomic) BOOL appliesToHidden; // ivar: mAppliesToHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containsCellID:(struct ? )arg0 ;
-(BOOL)mayModifyFormulasInCells;
-(BOOL)mayModifyValuesReferencedByFormulas;
-(NSUInteger)count;
-(id)cellAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(struct ? )cellIDAtIndex:(NSUInteger)arg0 ;
-(struct ? *)cellIDs;
-(void)addCell:(id)arg0 andCellID:(struct ? )arg1 ;
-(void)dealloc;
-(void)popLastCell;
-(void)setMayModifyValuesReferencedByFormulas:(BOOL)arg0 ;


@end


#endif