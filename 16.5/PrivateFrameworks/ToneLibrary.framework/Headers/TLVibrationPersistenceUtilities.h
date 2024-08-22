// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLVIBRATIONPERSISTENCEUTILITIES_H
#define TLVIBRATIONPERSISTENCEUTILITIES_H


#import <Foundation/Foundation.h>


@interface TLVibrationPersistenceUtilities : NSObject



+(BOOL)_objectIsValidUserGeneratedVibrationPattern:(id)arg0 error:(*id)arg1 ;
+(BOOL)_validateObjectWithError:(*id)arg0 validationBlock:(id)arg1 ;
+(BOOL)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)arg0 error:(*id)arg1 ;
+(id)userGeneratedVibrationStoreFileURL;


@end


#endif