// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGMLIMAGETOFLOATSMODEL_H
#define VGMLIMAGETOFLOATSMODEL_H



#import "VGMLEspressoModel.h"

@interface VGMLImageToFloatsModel : VGMLEspressoModel



-(id)initWithModelInfo:(id)arg0 ;
-(void)inferInputImage:(struct __CVBuffer *)arg0 toOutput:(id)arg1 ;


@end


#endif