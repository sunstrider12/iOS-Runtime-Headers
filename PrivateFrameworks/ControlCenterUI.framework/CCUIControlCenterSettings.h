/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIControlCenterSettings : _UISettings {
    float  _attachmentFrequencyAbove;
    float  _attachmentFrequencyBelow;
    float  _attachmentMaxDamping;
    float  _attachmentMinDamping;
    float  _attachmentThreshold;
    float  _attachmentVelocityDamping;
    float  _backgroundDarkening;
    float  _bounceDensityFactor;
    float  _bounceResistance;
    float  _maxVelocity;
    float  _minVelocity;
    float  _oldBounceFriction;
    float  _platterWallpaperAlpha;
    CCUIControlCenterSettingsSectionSettings * _settingsSectionSettings;
    CCUIControlCenterShortcutSectionSettings * _shortcutSectionSettings;
    BOOL  _useNewBounce;
}

@property float attachmentFrequencyAbove;
@property float attachmentFrequencyBelow;
@property float attachmentMaxDamping;
@property float attachmentMinDamping;
@property float attachmentThreshold;
@property float attachmentVelocityDamping;
@property float backgroundDarkening;
@property float bounceDensityFactor;
@property float bounceResistance;
@property float maxVelocity;
@property float minVelocity;
@property float oldBounceFriction;
@property float platterWallpaperAlpha;
@property (retain) CCUIControlCenterSettingsSectionSettings *settingsSectionSettings;
@property (retain) CCUIControlCenterShortcutSectionSettings *shortcutSectionSettings;
@property BOOL useNewBounce;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (float)attachmentFrequencyAbove;
- (float)attachmentFrequencyBelow;
- (float)attachmentMaxDamping;
- (float)attachmentMinDamping;
- (float)attachmentThreshold;
- (float)attachmentVelocityDamping;
- (float)backgroundDarkening;
- (float)bounceDensityFactor;
- (float)bounceResistance;
- (float)maxVelocity;
- (float)minVelocity;
- (float)oldBounceFriction;
- (float)platterWallpaperAlpha;
- (void)setAttachmentFrequencyAbove:(float)arg1;
- (void)setAttachmentFrequencyBelow:(float)arg1;
- (void)setAttachmentMaxDamping:(float)arg1;
- (void)setAttachmentMinDamping:(float)arg1;
- (void)setAttachmentThreshold:(float)arg1;
- (void)setAttachmentVelocityDamping:(float)arg1;
- (void)setBackgroundDarkening:(float)arg1;
- (void)setBounceDensityFactor:(float)arg1;
- (void)setBounceResistance:(float)arg1;
- (void)setDefaultValues;
- (void)setMaxVelocity:(float)arg1;
- (void)setMinVelocity:(float)arg1;
- (void)setOldBounceFriction:(float)arg1;
- (void)setPlatterWallpaperAlpha:(float)arg1;
- (void)setSettingsSectionSettings:(id)arg1;
- (void)setShortcutSectionSettings:(id)arg1;
- (void)setUseNewBounce:(BOOL)arg1;
- (id)settingsSectionSettings;
- (id)shortcutSectionSettings;
- (BOOL)useNewBounce;

@end
