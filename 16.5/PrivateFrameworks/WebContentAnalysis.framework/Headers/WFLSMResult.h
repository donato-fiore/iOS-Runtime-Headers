// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLSMRESULT_H
#define WFLSMRESULT_H

@class NSMutableArray, NSNumber;

#import <Foundation/Foundation.h>


@interface WFLSMResult : NSObject {
    NSMutableArray *categoryJudgements;
}


@property (copy) NSNumber *threshold; // ivar: threshold


+(id)LSMResultWithLSMResultRef:(struct __LSMResult *)arg0 threshold:(id)arg1 ;
+(id)extractScoresFromLSMResults:(struct __LSMResult *)arg0 ;
-(BOOL)isRestricted;
-(NSInteger)bestMatchingCategory;
-(NSInteger)numberOfCategories;
-(float)scoreForCategory:(NSInteger)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithLSMResultRef:(struct __LSMResult *)arg0 threshold:(id)arg1 ;
-(void)dealloc;
-(void)setScore:(float)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif