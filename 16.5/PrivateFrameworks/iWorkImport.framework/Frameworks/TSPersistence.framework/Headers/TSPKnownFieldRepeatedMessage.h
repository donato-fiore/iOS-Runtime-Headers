// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPKNOWNFIELDREPEATEDMESSAGE_H
#define TSPKNOWNFIELDREPEATEDMESSAGE_H



#import "TSPKnownFieldRepeatedStringValue.h"
#import "TSPKnownFieldReferencesHelper.h"

@interface TSPKnownFieldRepeatedMessage : TSPKnownFieldRepeatedStringValue {
    TSPKnownFieldReferencesHelper *_referencesHelper;
}




-(id)debugDescription;
-(id)initWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif