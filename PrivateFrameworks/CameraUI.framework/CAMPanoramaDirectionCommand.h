/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPanoramaDirectionCommand : CAMCaptureCommand {

	long long __direction;

}

@property (nonatomic,readonly) long long _direction;              //@synthesize _direction=__direction - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_direction;
-(id)initWithDirection:(long long)arg1 ;
-(void)executeWithContext:(id)arg1 ;
@end
