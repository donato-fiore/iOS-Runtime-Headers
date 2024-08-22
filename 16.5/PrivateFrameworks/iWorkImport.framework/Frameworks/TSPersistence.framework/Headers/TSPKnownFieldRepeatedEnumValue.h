// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPKNOWNFIELDREPEATEDENUMVALUE_H
#define TSPKNOWNFIELDREPEATEDENUMVALUE_H



#import "TSPKnownFieldRepeatedNumericValue.h"

@interface TSPKnownFieldRepeatedEnumValue : TSPKnownFieldRepeatedNumericValue {
    shared_ptr<google::protobuf::UnknownFieldSet> _unknownFieldSet;
}




-(BOOL)hasUnknownValues;
-(id)debugDescription;
-(id)initWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 unknownFieldSet:(*void)arg4 ;
-(void)mergeToMessage:(struct Message *)arg0 reflection:(struct Reflection *)arg1 ;
-(void)mergeToUnknownFieldSet:(*void)arg0 ;


@end


#endif