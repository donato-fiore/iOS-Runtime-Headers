// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATERESTORATIONKEYEDUNARCHIVER_H
#define UISTATERESTORATIONKEYEDUNARCHIVER_H

@class NSKeyedUnarchiver, NSDictionary;



@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {
    NSDictionary *_defaultValues;
}




-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodeTopLevelObjectOfClasses:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)initForReadingWithData:(id)arg0 defaultValues:(id)arg1 requiresSecureCoding:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif