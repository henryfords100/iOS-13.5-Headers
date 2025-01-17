/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMActiveSoundOutputActionHandleProvider.h>

@class AXMActiveSound, AXMSoundComponent, NSString;

@interface AXMActiveSoundOutputActionHandleImpl : NSObject <AXMActiveSoundOutputActionHandleProvider> {

	float _rate;
	float _pitch;
	AXMActiveSound* _activeSound;
	AXMSoundComponent* _soundComponent;

}

@property (assign,nonatomic,__weak) AXMActiveSound * activeSound;                    //@synthesize activeSound=_activeSound - In the implementation block
@property (assign,nonatomic,__weak) AXMSoundComponent * soundComponent;              //@synthesize soundComponent=_soundComponent - In the implementation block
@property (assign,nonatomic) float rate;                                             //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                            //@synthesize pitch=_pitch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)stop;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setQuantizedRate:(long long)arg1 ;
-(void)setActiveSound:(AXMActiveSound *)arg1 ;
-(void)setSoundComponent:(AXMSoundComponent *)arg1 ;
-(AXMActiveSound *)activeSound;
-(AXMSoundComponent *)soundComponent;
@end

