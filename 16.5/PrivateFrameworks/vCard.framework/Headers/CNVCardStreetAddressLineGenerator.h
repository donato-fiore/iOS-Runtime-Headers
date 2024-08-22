// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDSTREETADDRESSLINEGENERATOR_H
#define CNVCARDSTREETADDRESSLINEGENERATOR_H



#import "CNVCardLineGenerator.h"

@interface CNVCardStreetAddressLineGenerator : CNVCardLineGenerator



-(id)lineWithValue:(id)arg0 label:(id)arg1 ;
-(id)makeLineWithName:(id)arg0 value:(id)arg1 ;
-(id)standardLabelsForLabel:(id)arg0 ;
-(void)addGroupedLineWithName:(id)arg0 value:(id)arg1 toLine:(id)arg2 ;


@end


#endif