/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject {

	SGMFoundInAppsICS* _foundInAppsICS;

}

@property (nonatomic,retain) SGMFoundInAppsICS * foundInAppsICS;              //@synthesize foundInAppsICS=_foundInAppsICS - In the implementation block
+(id)instance;
+(void)recordWithTimezoneValue:(SGMFoundInAppsICSTZValue_)arg1 datetimeType:(SGMFoundInAppsDatetimeType_)arg2 ;
-(id)init;
-(SGMFoundInAppsICS *)foundInAppsICS;
-(void)setFoundInAppsICS:(SGMFoundInAppsICS *)arg1 ;
@end
